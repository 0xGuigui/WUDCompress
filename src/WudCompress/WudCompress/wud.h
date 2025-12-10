#ifndef WUD_H
#define WUD_H

#include <stdio.h>
#include <string.h>

#ifdef _WIN32
#define WUD_FSEEKO _fseeki64
#define WUD_FTELLO _ftelli64
#define WUD_STRCASECMP _stricmp
#else
#include <strings.h>
#define WUD_FSEEKO fseeko
#define WUD_FTELLO ftello
#define WUD_STRCASECMP strcasecmp
#endif

typedef struct
{
	unsigned int		magic0;
	unsigned int		magic1;
	unsigned int		sectorSize;
	unsigned long long	uncompressedSize;
	unsigned int		flags;
}wuxHeader_t;

typedef struct
{
	FILE*			fileWud;
	long long		uncompressedSize;
	bool			isCompressed;
	// data only used when compressed
	unsigned int	sectorSize;
	unsigned int	indexTableEntryCount;
	unsigned int*	indexTable;
	long long		offsetIndexTable;
	long long		offsetSectorArray;
}wud_t;

#define WUX_MAGIC_0	'0XUW' // "WUX0"
#define WUX_MAGIC_1	0x1099d02e

// wud and wux functions
wud_t* wud_open(char* path); // handles both, compressed and uncompressed files
void wud_close(wud_t* wud);

unsigned int wud_readData(wud_t* wud, void* buffer, unsigned int length, long long offset);
bool wud_isWUXCompressed(wud_t* wud);
long long wud_getWUDSize(wud_t* wud);

#endif // WUD_H
