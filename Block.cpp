#include "Block.h"
#include "sha256.h"

Block::Block(uint32_t nIndexIn, const string &sDataIn) : _nIndex(nIndexIn), _sData(sDataIn)
{
  _nNonce = 0;
  _tTime = time(nullptr);
  sHash = _CalculateHash();
}
