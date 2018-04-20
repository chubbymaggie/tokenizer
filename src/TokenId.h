/*-
 * Copyright 2018 Diomidis Spinellis
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#ifndef TOKEIND_H
#define TOKEIND_H

/**
 * Numeric identifiers used for representing tokens.
 */
class TokenId {
public:
	// 0-255 ASCII characters
	static const int CHARACTER = 0;

	// Language's keywords
	static const int KEYWORD = 300;

	// Multi-character operators and other non-keyword tokens (e.g. elipsis)
	static const int OTHER_TOKEN = 600;

	// Numbers on a log_10 scale are centered around this value
	// and extend +-400 around it
	static const int NUMBER_ZERO = 1500;

	// Identifiers are dynamically allocated from this number upward
	static const int IDENTIFIER = 2000;
};
#endif /* TOKEIND_H */
