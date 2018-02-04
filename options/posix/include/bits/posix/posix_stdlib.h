
#ifndef MLIBC_POSIX_STDLIB_H
#define MLIBC_POSIX_STDLIB_H

#ifdef __cplusplus
extern "C" {
#endif

long random(void);

// ----------------------------------------------------------------------------
// Environment.
// ----------------------------------------------------------------------------

int putenv(const char *);

// ----------------------------------------------------------------------------
// Path handling.
// ----------------------------------------------------------------------------

int mkstemp(char *);

char *realpath(const char *__restrict, char *__restrict);

#ifdef __cplusplus
}
#endif

#endif // MLIBC_POSIX_STDLIB_H
