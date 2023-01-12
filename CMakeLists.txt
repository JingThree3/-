cmake_minimum_required(VERSION 3.22)
project(ExpressManage)

set(CMAKE_CXX_STANDARD 14)



set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fexec-charset=GBK")


set(CMAKE_AUTOMOC ON)#moc
set(CMAKE_AUTOUIC ON)#uic
set(CMAKE_AUTORCC ON)#rcc

##设置qt的cmake目录
set(CMAKE_PREFIX_PATH D:/qt/6.2.4/mingw_64)
##寻找对应的qt模块
find_package(QT NAMES Qt6Widgets REQUIRED D:/qt/6.2.4/mingw_64/lib)
##自动调用qt的扩展部分


include_directories(C:\\Program\ Files\\MySQL\\MySQL\ Server\ 8.0\\include) #MySQLinclude路径
link_directories(C:\\Program\ Files\\MySQL\\MySQL\ Server\ 8.0\\lib) #MySQL下的lib路径
link_libraries(libmysql)


add_executable(ExpressManage main.cpp Package.cpp Package.h Staff.cpp Staff.h System.cpp System.h mysql_operation.cpp mysql_operation.h menu_selectrole.cpp menu_selectrole.h menu_selectrole_ui.h rec_query.cpp rec_query.h rec_query_ui.h man_login.cpp man_login.h man_login_ui.h man_addnewpac.cpp man_addnewpac.h man_addnewpac_ui.h man_datacount.cpp man_datacount.h man_datacount_ui.h man_functionui.cpp man_functionui.h man_functionui_ui.h man_recui.cpp man_recui.h man_recui_ui.h man_setpackage.cpp man_setpackage.h man_setpackage_ui.h man_unrecpac.cpp man_unrecpac.h man_unrecpac_ui.h Date.cpp Date.h)

target_link_libraries(ExpressManage Qt6::Widgets)
#把指定的qt模块链接进程序
target_link_libraries(ExpressManage libmysql)
#把mysql模块链接进程序
