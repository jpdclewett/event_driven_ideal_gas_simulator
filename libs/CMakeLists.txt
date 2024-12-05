include(library_list.txt)

message("library list: ${library_list}")

foreach (library ${library_list})
    add_subdirectory(${library})
endforeach()