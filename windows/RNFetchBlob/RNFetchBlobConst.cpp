#include "pch.h"
#include "RNFetchBlobConst.h"

namespace RNFetchBlob {

/*static*/ char const* const RNFetchBlobConst::FILE_PREFIX = "RNFetchBlob-file://";
/*static*/ char const* const RNFetchBlobConst::ASSET_PREFIX = "bundle-assets://";
/*static*/ char const* const RNFetchBlobConst::AL_PREFIX = "assets-library://";

// fetch configs
/*static*/ char const* const RNFetchBlobConst::CONFIG_USE_TEMP = "fileCache";
/*static*/ char const* const RNFetchBlobConst::CONFIG_FILE_PATH = "path";
/*static*/ char const* const RNFetchBlobConst::CONFIG_FILE_EXT = "appendExt";
/*static*/ char const* const RNFetchBlobConst::CONFIG_TRUSTY = "trusty";
/*static*/ char const* const RNFetchBlobConst::CONFIG_WIFI_ONLY = "wifiOnly";
/*static*/ char const* const RNFetchBlobConst::CONFIG_INDICATOR = "indicator";
/*static*/ char const* const RNFetchBlobConst::CONFIG_KEY = "key";
/*static*/ char const* const RNFetchBlobConst::CONFIG_EXTRA_BLOB_CTYPE = "binaryContentTypes";

/*static*/ char const* const RNFetchBlobConst::EVENT_STATE_CHANGE = "RNFetchBlobState";
/*static*/ char const* const RNFetchBlobConst::EVENT_SERVER_PUSH = "RNFetchBlobServerPush";
/*static*/ char const* const RNFetchBlobConst::EVENT_PROGRESS = "RNFetchBlobProgress";
/*static*/ char const* const RNFetchBlobConst::EVENT_PROGRESS_UPLOAD = "RNFetchBlobProgress-upload";
/*static*/ char const* const RNFetchBlobConst::EVENT_EXPIRE = "RNFetchBlobExpire";

/*static*/ char const* const RNFetchBlobConst::MSG_EVENT = "RNFetchBlobMessage";
/*static*/ char const* const RNFetchBlobConst::MSG_EVENT_LOG = "log";
/*static*/ char const* const RNFetchBlobConst::MSG_EVENT_WARN = "warn";
/*static*/ char const* const RNFetchBlobConst::MSG_EVENT_ERROR = "error";
/*static*/ char const* const RNFetchBlobConst::FS_EVENT_DATA = "data";
/*static*/ char const* const RNFetchBlobConst::FS_EVENT_END = "end";
/*static*/ char const* const RNFetchBlobConst::FS_EVENT_WARN = "warn";
/*static*/ char const* const RNFetchBlobConst::FS_EVENT_ERROR = "error";

/*static*/ char const* const RNFetchBlobConst::KEY_REPORT_PROGRESS = "reportProgress";
/*static*/ char const* const RNFetchBlobConst::KEY_REPORT_UPLOAD_PROGRESS = "reportUploadProgress";

// response type
/*static*/ char const* const RNFetchBlobConst::RESP_TYPE_BASE64 = "base64";
/*static*/ char const* const RNFetchBlobConst::RESP_TYPE_UTF8 = "utf8";
/*static*/ char const* const RNFetchBlobConst::RESP_TYPE_PATH = "path";

} // namespace RNFetchBlob
