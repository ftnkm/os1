#ifndef __biblioteka_h__
#define __biblioteka_h__

#include <sys/time.h>
#include <sys/stat.h>
#include <assert.h>

double DajVreme() {
    struct timeval t;
    int rc = gettimeofday(&t, NULL);
    assert(rc == 0);
    return (double) t.tv_sec + (double) t.tv_usec/1e6;
}

void Spin(int kolikodugo) {
    double t = DajVreme();
    while ((DajVreme() - t) < (double) kolikodugo)
	; // ne radi nista, samo se "vrti" dok ne prodje sekunda
}

#endif // __biblioteka_h__
