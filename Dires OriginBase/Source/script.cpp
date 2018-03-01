#include "stdafx.h"

void main() {
	while (true) {
		OriginMenu();
		WAIT(0);
	}
}

void ScriptMain() {
	srand(GetTickCount());
	main();
}
