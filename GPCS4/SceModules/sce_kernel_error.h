#pragma once

// sce kernel error codes

#define SCE_KERNEL_ERROR_UNKNOWN				0x80020000
#define SCE_KERNEL_ERROR_EPERM					-2147352575  //0x80020001
#define SCE_KERNEL_ERROR_ENOENT					-2147352574  //0x80020002
#define SCE_KERNEL_ERROR_ESRCH					-2147352573  //0x80020003
#define SCE_KERNEL_ERROR_EINTR					-2147352572  //0x80020004
#define SCE_KERNEL_ERROR_EIO					-2147352571  //0x80020005
#define SCE_KERNEL_ERROR_ENXIO					-2147352570  //0x80020006
#define SCE_KERNEL_ERROR_E2BIG					-2147352569  //0x80020007
#define SCE_KERNEL_ERROR_ENOEXEC				-2147352568  //0x80020008
#define SCE_KERNEL_ERROR_EBADF					-2147352567  //0x80020009
#define SCE_KERNEL_ERROR_ECHILD					-2147352566  //0x8002000A
#define SCE_KERNEL_ERROR_EDEADLK				-2147352565  //0x8002000B
#define SCE_KERNEL_ERROR_ENOMEM					-2147352564  //0x8002000C
#define SCE_KERNEL_ERROR_EACCES					-2147352563  //0x8002000D
#define SCE_KERNEL_ERROR_EFAULT					-2147352562  //0x8002000E
#define SCE_KERNEL_ERROR_ENOTBLK				-2147352561  //0x8002000F
#define SCE_KERNEL_ERROR_EBUSY					-2147352560  //0x80020010
#define SCE_KERNEL_ERROR_EEXIST					-2147352559  //0x80020011
#define SCE_KERNEL_ERROR_EXDEV					-2147352558  //0x80020012
#define SCE_KERNEL_ERROR_ENODEV					-2147352557  //0x80020013
#define SCE_KERNEL_ERROR_ENOTDIR				-2147352556  //0x80020014
#define SCE_KERNEL_ERROR_EISDIR					-2147352555  //0x80020015
#define SCE_KERNEL_ERROR_EINVAL					-2147352554  //0x80020016
#define SCE_KERNEL_ERROR_ENFILE					-2147352553  //0x80020017
#define SCE_KERNEL_ERROR_EMFILE					-2147352552  //0x80020018
#define SCE_KERNEL_ERROR_ENOTTY					-2147352551  //0x80020019
#define SCE_KERNEL_ERROR_ETXTBSY				-2147352550  //0x8002001A
#define SCE_KERNEL_ERROR_EFBIG					-2147352549  //0x8002001B
#define SCE_KERNEL_ERROR_ENOSPC					-2147352548  //0x8002001C
#define SCE_KERNEL_ERROR_ESPIPE					-2147352547  //0x8002001D
#define SCE_KERNEL_ERROR_EROFS					-2147352546  //0x8002001E
#define SCE_KERNEL_ERROR_EMLINK					-2147352545  //0x8002001F
#define SCE_KERNEL_ERROR_EPIPE					-2147352544  //0x80020020
#define SCE_KERNEL_ERROR_EDOM					-2147352543  //0x80020021
#define SCE_KERNEL_ERROR_ERANGE					-2147352542  //0x80020022
#define SCE_KERNEL_ERROR_EAGAIN					-2147352541  //0x80020023
#define SCE_KERNEL_ERROR_EWOULDBLOCK			-2147352541  //0x80020023
#define SCE_KERNEL_ERROR_EINPROGRESS			-2147352540  //0x80020024
#define SCE_KERNEL_ERROR_EALREADY				-2147352539  //0x80020025
#define SCE_KERNEL_ERROR_ENOTSOCK				-2147352538  //0x80020026
#define SCE_KERNEL_ERROR_EDESTADDRREQ			-2147352537  //0x80020027
#define SCE_KERNEL_ERROR_EMSGSIZE				-2147352536  //0x80020028
#define SCE_KERNEL_ERROR_EPROTOTYPE				-2147352535  //0x80020029
#define SCE_KERNEL_ERROR_ENOPROTOOPT			-2147352534  //0x8002002A
#define SCE_KERNEL_ERROR_EPROTONOSUPPORT		-2147352533  //0x8002002B
#define SCE_KERNEL_ERROR_ESOCKTNOSUPPORT		-2147352532  //0x8002002C
#define SCE_KERNEL_ERROR_EOPNOTSUPP				-2147352531  //0x8002002D
#define SCE_KERNEL_ERROR_ENOTSUP				-2147352531  //0x8002002D
#define SCE_KERNEL_ERROR_EPFNOSUPPORT			-2147352530  //0x8002002E
#define SCE_KERNEL_ERROR_EAFNOSUPPORT			-2147352529  //0x8002002F
#define SCE_KERNEL_ERROR_EADDRINUSE				-2147352528  //0x80020030
#define SCE_KERNEL_ERROR_EADDRNOTAVAIL			-2147352527  //0x80020031
#define SCE_KERNEL_ERROR_ENETDOWN				-2147352526  //0x80020032
#define SCE_KERNEL_ERROR_ENETUNREACH			-2147352525  //0x80020033
#define SCE_KERNEL_ERROR_ENETRESET				-2147352524  //0x80020034
#define SCE_KERNEL_ERROR_ECONNABORTED			-2147352523  //0x80020035
#define SCE_KERNEL_ERROR_ECONNRESET				-2147352522  //0x80020036
#define SCE_KERNEL_ERROR_ENOBUFS				-2147352521  //0x80020037
#define SCE_KERNEL_ERROR_EISCONN				-2147352520  //0x80020038
#define SCE_KERNEL_ERROR_ENOTCONN				-2147352519  //0x80020039
#define SCE_KERNEL_ERROR_ESHUTDOWN				-2147352518  //0x8002003A
#define SCE_KERNEL_ERROR_ETOOMANYREFS			-2147352517  //0x8002003B
#define SCE_KERNEL_ERROR_ETIMEDOUT				-2147352516  //0x8002003C
#define SCE_KERNEL_ERROR_ECONNREFUSED			-2147352515  //0x8002003D
#define SCE_KERNEL_ERROR_ELOOP					-2147352514  //0x8002003E
#define SCE_KERNEL_ERROR_ENAMETOOLONG			-2147352513  //0x8002003F
#define SCE_KERNEL_ERROR_EHOSTDOWN				-2147352512  //0x80020040
#define SCE_KERNEL_ERROR_EHOSTUNREACH			-2147352511  //0x80020041
#define SCE_KERNEL_ERROR_ENOTEMPTY				-2147352510  //0x80020042
#define SCE_KERNEL_ERROR_EPROCLIM				-2147352509  //0x80020043
#define SCE_KERNEL_ERROR_EUSERS					-2147352508  //0x80020044
#define SCE_KERNEL_ERROR_EDQUOT					-2147352507  //0x80020045
#define SCE_KERNEL_ERROR_ESTALE					-2147352506  //0x80020046
#define SCE_KERNEL_ERROR_EREMOTE				-2147352505  //0x80020047
#define SCE_KERNEL_ERROR_EBADRPC				-2147352504  //0x80020048
#define SCE_KERNEL_ERROR_ERPCMISMATCH			-2147352503  //0x80020049
#define SCE_KERNEL_ERROR_EPROGUNAVAIL			-2147352502  //0x8002004A
#define SCE_KERNEL_ERROR_EPROGMISMATCH			-2147352501  //0x8002004B
#define SCE_KERNEL_ERROR_EPROCUNAVAIL			-2147352500  //0x8002004C
#define SCE_KERNEL_ERROR_ENOLCK					-2147352499  //0x8002004D
#define SCE_KERNEL_ERROR_ENOSYS					-2147352498  //0x8002004E
#define SCE_KERNEL_ERROR_EFTYPE					-2147352497  //0x8002004F
#define SCE_KERNEL_ERROR_EAUTH					-2147352496  //0x80020050
#define SCE_KERNEL_ERROR_ENEEDAUTH				-2147352495  //0x80020051
#define SCE_KERNEL_ERROR_EIDRM					-2147352494  //0x80020052
#define SCE_KERNEL_ERROR_ENOMSG					-2147352493  //0x80020053
#define SCE_KERNEL_ERROR_EOVERFLOW				-2147352492  //0x80020054
#define SCE_KERNEL_ERROR_ECANCELED				-2147352491  //0x80020055
#define SCE_KERNEL_ERROR_EILSEQ					-2147352490  //0x80020056
#define SCE_KERNEL_ERROR_ENOATTR				-2147352489  //0x80020057
#define SCE_KERNEL_ERROR_EDOOFUS				-2147352488  //0x80020058
#define SCE_KERNEL_ERROR_EBADMSG				-2147352487  //0x80020059
#define SCE_KERNEL_ERROR_EMULTIHOP				-2147352486  //0x8002005A
#define SCE_KERNEL_ERROR_ENOLINK				-2147352485  //0x8002005B
#define SCE_KERNEL_ERROR_EPROTO					-2147352484  //0x8002005C
#define SCE_KERNEL_ERROR_ENOTCAPABLE			-2147352483  //0x8002005D
#define SCE_KERNEL_ERROR_ECAPMODE				-2147352482  //0x8002005E
#define SCE_KERNEL_ERROR_ENOBLK					-2147352481  //0x8002005F
#define SCE_KERNEL_ERROR_EICV					-2147352480  //0x80020060
#define SCE_KERNEL_ERROR_ENOPLAYGOENT			-2147352479  //0x80020061
#define SCE_KERNEL_ERROR_EREVOKE				-2147352478  //0x80020062
#define SCE_KERNEL_ERROR_ESDKVERSION			-2147352477  //0x80020063
#define SCE_KERNEL_ERROR_ESTART				-2147352476  //0x80020064
#define SCE_KERNEL_ERROR_ESTOP				-2147352475  //0x80020065