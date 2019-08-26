// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
	{0,         "42e8fe0ee13f7ce3b2a7fd6ecdf0d794fdfcd231bcd9e06f3ba5c770f0cb258e"},        
	{2,         "1510be6bdcc9ce8398de6551855f3a0c0531e9c17aa7222942e22ac8d48a1a77"},
    {10000,     "eaacccd0feede42997edb217857e8ad4e4a68cf6026b3ab519c1bf134d026d99"},
	{50000,     "ec9bd175afc890367a276eedcb3faa819612aaefd48d5517159c1c768dfc4d2b"},
	{100000,	"cd23474d9a99c5ab4f1b41e76f6e77380d78ca2707cf494a163ac81af44afecf"},
    {200000,	"7da8491fb5eb3e82a94fb2ff3196e326729194e00d3d2746d3fb461bf1fc70c6"},
    {333001,	"15299e1740d91b1769550e37a53a72deeb21a14fc4d95db1375f6f694c642e37"}};
} // namespace CryptoNote
