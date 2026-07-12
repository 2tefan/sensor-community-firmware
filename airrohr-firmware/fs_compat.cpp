#if defined(ESP32)
#include <FS.h>
#include <FSImpl.h>

namespace fs {

boolean FileImpl::seekDir(long) {
    return false;
}

String FileImpl::getNextFileName(void) {
    return String();
}

String FileImpl::getNextFileName(bool *isDir) {
    if (isDir) {
        *isDir = false;
    }
    return String();
}

} // namespace fs
#endif
