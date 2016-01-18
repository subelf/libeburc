#pragma once

#include <pch.h>
#include <defs.h>
#include <Zio.h>
#include <EBException.h>

using namespace std;
using namespace Windows::Storage;

namespace libeburc
{
	class FileName
	{
	public:
		/// <summary>
		/// Rewrite `found_file_name' to a real file name in the `path_name'
		/// directory.
		///
		/// If a file matched to `target_file_name' exists, then EB_SUCCESS
		/// is returned, and `found_file_name' is rewritten to that name.
		/// Otherwise EB_ERR_BAD_FILE_NAME is returned.
		///
		/// Note that `target_file_name' must not contain `.' or excceed
		/// EB_MAX_DIRECTORY_NAME_LENGTH characters.
		///
		/// Ex: Returns the found_file_name instead.
		/// </summary>
		static StorageFile^ eb_find_file_name( IStorageFolder^ Folder, wstring target_file_name );
		static ZioCode eb_path_name_zio_code( IStorageFile^ File, ZioCode DefaultCode );
	};
}
