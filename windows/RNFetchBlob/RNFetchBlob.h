#pragma once
#include <functional>
#include <NativeModules.h>

namespace RNFetchBlob
{

REACT_MODULE(RNFetchBlob)
struct RNFetchBlob
{
	REACT_CONSTANT_PROVIDER(ExportConstants);
	void ExportConstants(winrt::Microsoft::ReactNative::ReactConstantProvider& constants) noexcept;

   // Fetch blob data request
   REACT_METHOD(FetchBlobForm, L"fetchBlobForm");
   void FetchBlobForm(winrt::Microsoft::ReactNative::JSValueObject const& options,
      std::string const& taskId,
      std::string const& method,
      std::string const& url,
      winrt::Microsoft::ReactNative::JSValueObject const& headers,
      winrt::Microsoft::ReactNative::JSValueArray const& form,
      std::function<void(std::string)>&& callback) noexcept;
};

} // namespace RNFetchBlob
