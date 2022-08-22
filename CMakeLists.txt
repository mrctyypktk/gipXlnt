cmake_minimum_required (VERSION 3.10.2)

##### PLUGIN NAME #####
set(pluginname gipXlnt)


##### PLUGIN PATHS #####
set(PLUGIN_DIR ${PLUGINS_DIR}/${pluginname})
set(PLUGIN_LIBS_DIR ${PLUGIN_DIR}/libs)


##### PLUGIN SOURCES #####
list(APPEND PLUGIN_SRCS
			${PLUGIN_DIR}/src/gipXlnt.cpp
			${PLUGIN_LIBS_DIR}/src/cell/cell_reference.cpp
			${PLUGIN_LIBS_DIR}/src/cell/cell.cpp
			${PLUGIN_LIBS_DIR}/src/cell/comment.cpp
			${PLUGIN_LIBS_DIR}/src/cell/hyperlink.cpp
			${PLUGIN_LIBS_DIR}/src/cell/index_types.cpp
			${PLUGIN_LIBS_DIR}/src/cell/phonetic_run.cpp
			${PLUGIN_LIBS_DIR}/src/cell/rich_text_run.cpp
			${PLUGIN_LIBS_DIR}/src/cell/rich_text.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/aes.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/base64.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/compound_document.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/encryption_info.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/hash.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/sha.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/xlsx_crypto_consumer.cpp
			${PLUGIN_LIBS_DIR}/src/detail/cryptography/xlsx_crypto_producer.cpp
			${PLUGIN_LIBS_DIR}/src/detail/header_footer/header_footer_code.cpp
			${PLUGIN_LIBS_DIR}/src/detail/implementations/cell_impl.cpp
			${PLUGIN_LIBS_DIR}/src/detail/number_format/number_formatter.cpp
			${PLUGIN_LIBS_DIR}/src/detail/serialization/custom_value_traits.cpp
			${PLUGIN_LIBS_DIR}/src/detail/serialization/open_stream.cpp
			${PLUGIN_LIBS_DIR}/src/detail/serialization/vector_streambuf.cpp
			${PLUGIN_LIBS_DIR}/src/detail/serialization/xlsx_consumer.cpp
			${PLUGIN_LIBS_DIR}/src/detail/serialization/xlsx_producer.cpp
			${PLUGIN_LIBS_DIR}/src/detail/serialization/zstream.cpp
			${PLUGIN_LIBS_DIR}/src/detail/constants.cpp
			${PLUGIN_LIBS_DIR}/src/detail/unicode.cpp
			${PLUGIN_LIBS_DIR}/src/drawing/spreadsheet_drawing.cpp
			${PLUGIN_LIBS_DIR}/src/packaging/ext_list.cpp
			${PLUGIN_LIBS_DIR}/src/packaging/manifest.cpp
			${PLUGIN_LIBS_DIR}/src/packaging/relationship.cpp
			${PLUGIN_LIBS_DIR}/src/packaging/uri.cpp
			${PLUGIN_LIBS_DIR}/src/styles/alignment.cpp
			${PLUGIN_LIBS_DIR}/src/styles/border.cpp
			${PLUGIN_LIBS_DIR}/src/styles/color.cpp
			${PLUGIN_LIBS_DIR}/src/styles/conditional_format.cpp
			${PLUGIN_LIBS_DIR}/src/styles/fill.cpp
			${PLUGIN_LIBS_DIR}/src/styles/font.cpp
			${PLUGIN_LIBS_DIR}/src/styles/format.cpp
			${PLUGIN_LIBS_DIR}/src/styles/number_format.cpp
			${PLUGIN_LIBS_DIR}/src/styles/protection.cpp
			${PLUGIN_LIBS_DIR}/src/styles/style.cpp
			${PLUGIN_LIBS_DIR}/src/utils/date.cpp
			${PLUGIN_LIBS_DIR}/src/utils/datetime.cpp
			${PLUGIN_LIBS_DIR}/src/utils/exceptions.cpp
			${PLUGIN_LIBS_DIR}/src/utils/path.cpp
			${PLUGIN_LIBS_DIR}/src/utils/time.cpp
			${PLUGIN_LIBS_DIR}/src/utils/timedelta.cpp
			${PLUGIN_LIBS_DIR}/src/utils/variant.cpp
			${PLUGIN_LIBS_DIR}/src/workbook/named_range.cpp
			${PLUGIN_LIBS_DIR}/src/workbook/streaming_workbook_reader.cpp
			${PLUGIN_LIBS_DIR}/src/workbook/streaming_workbook_writer.cpp
			${PLUGIN_LIBS_DIR}/src/workbook/workbook.cpp
			${PLUGIN_LIBS_DIR}/src/workbook/worksheet_iterator.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/cell_iterator.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/cell_vector.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/header_footer.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/page_margins.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/page_setup.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/phonetic_pr.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/range_iterator.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/range_reference.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/range.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/sheet_protection.cpp
			${PLUGIN_LIBS_DIR}/src/worksheet/worksheet.cpp
			
			
)


##### PLUGIN HEADERS #####
list(APPEND PLUGIN_INCLUDES
			${PLUGIN_DIR}/src
			${PLUGIN_LIBS_DIR}/include
			${PLUGIN_LIBS_DIR}/src
			${PLUGIN_LIBS_DIR}/src/miniz
			${PLUGIN_LIBS_DIR}/src/libstudxml
)


##### PLUGIN DEPENDENCY LOCATIONS (IF ANY) #####
if(WIN32)
	list(APPEND PLUGIN_LINKDIRS
				${PLUGIN_LIBS_DIR}/lib/win32
				${PLUGIN_LIBS_DIR}/bin
	)
	
	#set(PLUGIN_LIBDIRS ${PLUGIN_LIBS_DIR}/lib/win32)
	list(APPEND PLUGIN_LIBDIRS
				${PLUGIN_LIBS_DIR}/lib/win32
	)
elseif(LINUX)
	#Linux libs here
elseif(APPLE)
	#Macos libs here
endif(WIN32)


##### PLUGIN DEPENDENCY LINKING (IF ANY) #####					
if(WIN32)
	list(APPEND PLUGIN_LINKLIBS
				#Lib names
	)
elseif(LINUX)
	list(APPEND PLUGIN_LINKLIBS
				#Lib names
	)
elseif(APPLE)
	list(APPEND PLUGIN_LINKLIBS
				#Lib names
	)
endif(WIN32)