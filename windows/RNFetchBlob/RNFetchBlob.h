#pragma once
#include <functional>
#include <NativeModules.h>

namespace RNFetchBlob {

using namespace winrt::Microsoft::ReactNative;
using ResultCallback = std::function<void(JSValueArray const&)>;
using ResultPromise = ReactPromise<JSValue>;

REACT_MODULE(RNFetchBlob)
struct RNFetchBlob
{
	REACT_CONSTANT_PROVIDER(ExportConstants);
	void ExportConstants(ReactConstantProvider& constants) noexcept;

	// Fetch blob data request
	REACT_METHOD(FetchBlobForm, L"fetchBlobForm");
	void FetchBlobForm(JSValueObject const& options,
		std::string const& taskId,
		std::string const& method,
		std::string const& url,
		JSValueObject const& headers,
		JSValueArray const& form,
		ResultCallback&& callback) noexcept;

	// Fetch blob data request
	REACT_METHOD(FetchBlob, L"fetchBlob");
	void FetchBlob(JSValueObject const& options,
		std::string const& taskId,
		std::string const& method,
		std::string const& url,
		JSValueObject const& headers,
		std::string const& body,
		ResultCallback&& callback) noexcept;

	// fs.createFile
	REACT_METHOD(CreateFile, L"createFile");
	void CreateFile(std::string const& path,
		std::string const& data,
		std::string const& encoding,
		ResultPromise&& result) noexcept;

	// fs.createFileASCII
	// method for create file with ASCII content
	REACT_METHOD(CreateFileASCII, L"createFileASCII");
	void CreateFileASCII(std::string const& path,
		std::vector<char> const& dataArray,
		std::string const& encoding,
		ResultPromise&& result) noexcept;

	// fs.pathForAppGroup
	REACT_METHOD(PathForAppGroup, L"pathForAppGroup");
	void PathForAppGroup(std::string const& groupName,
		ResultPromise&& result) noexcept;

	// fs.syncPathAppGroup
	REACT_SYNC_METHOD(SyncPathAppGroup, L"syncPathAppGroup");
	std::string SyncPathAppGroup(std::string const& groupName) noexcept;

	// fs.exists
	REACT_METHOD(Exists, L"exists");
	void Exists(std::string const& path, ResultCallback&& callback) noexcept;

	// fs.writeFile
	REACT_METHOD(WriteFile, L"writeFile");
	void WriteFile(
		std::string const& path,
		std::string const& encoding,
		std::string const& data,
		bool append,
		ResultPromise&& result) noexcept;

	// fs.writeArray
	REACT_METHOD(WriteFileArray, L"writeFileArray");
	void WriteFileArray(std::string const& path, std::vector<char> const& data, bool append, ResultPromise&& result)noexcept;

	// fs.writeStream
	REACT_METHOD(WriteStream, L"writeStream");
	void WriteStream(std::string const& path, std::string const& encoding, bool append, ResultCallback&& callback) noexcept;

	// fs.writeArrayChunk
	REACT_METHOD(WriteArrayChunk, L"writeArrayChunk");
	void WriteArrayChunk(std::string const& streamId, std::vector<char> const& dataArray, ResultCallback&& callback) noexcept;

	// fs.writeChunk
	REACT_METHOD(WriteChunk, L"writeChunk");
	void WriteChunk(std::string const& streamId, std::string const& data, ResultCallback&& callback) noexcept;

	// fs.closeStream
	REACT_METHOD(CloseStream, L"closeStream");
	void CloseStream(std::string const& streamId, ResultCallback&& callback) noexcept;

	// unlink
	REACT_METHOD(Unlink, L"unlink");
	void Unlink(std::string const& path, ResultCallback&& callback) noexcept;

	// fs.removeSession
	REACT_METHOD(RemoveSession, L"removeSession");
	void RemoveSession(JSValueArray const& paths, ResultCallback&& callback) noexcept;

	// fs.ls
	REACT_METHOD(Listing, L"ls");
	void Listing(std::string const& path, ResultPromise&& result) noexcept;

	// fs.stat
	REACT_METHOD(Status, L"stat");
	void Status(std::string const& target, ResultCallback&& callback) noexcept;

	// fs.lstat
	REACT_METHOD(LinkStatus, L"lstat");
	void LinkStatus(std::string const& path, ResultCallback&& callback) noexcept;

	// fs.cp
	REACT_METHOD(Copy, L"cp");
	void Copy(std::string const& src, std::string const& dest, ResultCallback&& callback) noexcept;

	// fs.mv
	REACT_METHOD(Move, L"mv");
	void Move(std::string const& path, std::string const& dest, ResultCallback&& callback) noexcept;

	// fs.mkdir
	REACT_METHOD(MakeDirectory, L"mkdir");
	void MakeDirectory(std::string const& path, ResultPromise&& result) noexcept;

	// fs.readFile
	REACT_METHOD(ReadFile, L"readFile");
	void ReadFile(std::string const& path,
		std::string const& encoding,
		ResultPromise&& result) noexcept;

	// fs.hash
	REACT_METHOD(Hash, L"hash");
	void Hash(std::string const& path,
		std::string const& algorithm,
		ResultPromise&& result) noexcept;

	// fs.readStream
	REACT_METHOD(ReadStream, L"readStream");
	void ReadStream(
		std::string const& path,
		std::string const& encoding,
		int bufferSize,
		int tick,
		std::string const& streamId) noexcept;

	// fs.getEnvionmentDirs
	REACT_METHOD(GetEnvironmentDirs, L"getEnvironmentDirs");
	void GetEnvironmentDirs(ResultCallback&& callback) noexcept;

	// net.cancelRequest
	REACT_METHOD(CancelRequest, L"cancelRequest");
	void CancelRequest(std::string const& taskId, ResultCallback&& callback) noexcept;

	// net.enableProgressReport
	REACT_METHOD(EnableProgressReport, L"enableProgressReport");
	void EnableProgressReport(std::string const& taskId, int64_t interval, int64_t count) noexcept;

	// net.enableUploadProgressReport
	REACT_METHOD(EnableUploadProgressReport, L"enableUploadProgressReport");
	void EnableUploadProgressReport(std::string const& taskId, int64_t interval, int64_t count) noexcept;

	// fs.slice
	REACT_METHOD(Slice, L"slice");
	void Slice(std::string const& src, std::string const& dest, int64_t start, int64_t end, ResultPromise&& result) noexcept;

	REACT_METHOD(PreviewDocument, L"previewDocument");
	void PreviewDocument(std::string const& uri, std::string const& scheme, ResultPromise&& result) noexcept;

	// open file with UIDocumentInteractionController and delegate
	REACT_METHOD(OpenDocument, L"openDocument");
	void OpenDocument(std::string const& uri, std::string const& scheme, ResultPromise&& result) noexcept;

	// exclude from backup key
	REACT_METHOD(ExcludeFromBackupKey, L"excludeFromBackupKey");
	void ExcludeFromBackupKey(std::string const& url, ResultPromise&& result) noexcept;

	REACT_METHOD(df, L"df");
	void df(ResultCallback&& callback) noexcept;

	REACT_METHOD(EmitExpiredEvent, L"emitExpiredEvent");
	void EmitExpiredEvent(ResultCallback&& callback) noexcept;
};

} // namespace RNFetchBlob
