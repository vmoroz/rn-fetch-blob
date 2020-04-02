#pragma once
#ifndef RNFetchBlobConst_h
#define RNFetchBlobConst_h

namespace RNFetchBlob {

struct RNFetchBlobConst
{
	// lib event
	static char const* const MSG_EVENT;
	static char const* const MSG_EVENT_LOG;
	static char const* const MSG_EVENT_WARN;
	static char const* const MSG_EVENT_ERROR;

	static char const* const EVENT_EXPIRE;
	static char const* const EVENT_PROGRESS;
	static char const* const EVENT_SERVER_PUSH;
	static char const* const EVENT_PROGRESS_UPLOAD;
	static char const* const EVENT_STATE_CHANGE;

	static char const* const FILE_PREFIX;
	static char const* const ASSET_PREFIX;
	static char const* const AL_PREFIX;

	// config
	static char const* const CONFIG_USE_TEMP;
	static char const* const CONFIG_FILE_PATH;
	static char const* const CONFIG_FILE_EXT;
	static char const* const CONFIG_TRUSTY;
	static char const* const CONFIG_WIFI_ONLY;
	static char const* const CONFIG_INDICATOR;
	static char const* const CONFIG_KEY;
	static char const* const CONFIG_EXTRA_BLOB_CTYPE;

	// fs events
	static char const* const FS_EVENT_DATA;
	static char const* const FS_EVENT_END;
	static char const* const FS_EVENT_WARN;
	static char const* const FS_EVENT_ERROR;

	static char const* const KEY_REPORT_PROGRESS;
	static char const* const KEY_REPORT_UPLOAD_PROGRESS;

	// response type
	static char const* const RESP_TYPE_BASE64;
	static char const* const RESP_TYPE_UTF8;
	static char const* const RESP_TYPE_PATH;
};

} // namespace RNFetchBlob

#endif // RNFetchBlobConst_h