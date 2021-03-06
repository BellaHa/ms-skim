/*
Algorithm for Influence Estimation and Maximization

Copyright (c) Microsoft Corporation

All rights reserved.

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the ""Software""), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
#pragma once

#include <fstream>
#include <iostream>

using namespace std;

#include "Types.h"
#include "Assert.h"

namespace DataStructures {
namespace Graphs {

template<typename arcIdType>
class FastVertex {
public:

	// Define types.
	typedef arcIdType ArcIdType;

	// Default constructor.
	FastVertex() : firstArcId(0) {}

	// Get methods.
	inline arcIdType FirstArcId() const { return firstArcId; }

	// Set methods.
	inline void SetFirstArcId(const arcIdType a) { firstArcId = a; }

	// Consistency check.
	int GetErrors(const bool verbose = true) {
		return 0;
	}

protected:

	// First arc of this vertex.
	arcIdType firstArcId;
};
}
}