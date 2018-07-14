#include <stdlib.h>
#include "Forma.h"

void liberarForma(Forma forma, LiberarForma lf) {
	lf(forma);
}
