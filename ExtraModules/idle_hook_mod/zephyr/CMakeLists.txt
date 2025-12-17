zephyr_library()

zephyr_library_sources_ifdef(CONFIG_DISABLE_WFI_WHILE_DEBUG
  ${CMAKE_CURRENT_LIST_DIR}/../idle_hook.c
)