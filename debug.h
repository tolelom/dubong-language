#ifndef DUBONG_LANGUAGE_DEBUG_H
#define DUBONG_LANGUAGE_DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk *chunk, const char *name);

int disassembleInstruction(Chunk *chunk, int offset);

#endif //DUBONG_LANGUAGE_DEBUG_H
