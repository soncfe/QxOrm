/****************************************************************************
**
** Copyright (C) 2010 QxOrm France and/or its subsidiary(-ies)
** Contact: QxOrm France Information (contact@qxorm.com)
**
** This file is part of the QxOrm library
**
** Commercial Usage
** Licensees holding valid QxOrm Commercial licenses may use this file in
** accordance with the QxOrm Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and QxOrm France
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file 'license.gpl3.txt' included in the
** packaging of this file. Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html
**
** If you are unsure which license is appropriate for your use, please
** contact the support department at support@qxorm.com
**
****************************************************************************/

#ifndef _QX_CONFIG_H_
#define _QX_CONFIG_H_

#ifdef _MSC_VER
#pragma once
#endif

#define QX_VERSION   0x010101 // QxOrm version 1.1.1

#define _QX_SERIALIZE_POLYMORPHIC            0

#define _QX_SERIALIZE_BINARY                 (! _QX_SERIALIZE_POLYMORPHIC && 1)
#define _QX_SERIALIZE_TEXT                   (! _QX_SERIALIZE_POLYMORPHIC && 0)
#define _QX_SERIALIZE_XML                    (! _QX_SERIALIZE_POLYMORPHIC && 1)
#define _QX_SERIALIZE_PORTABLE_BINARY        (! _QX_SERIALIZE_POLYMORPHIC && 0)

/* -- Link error with VC++ 9.0 => Qt uses "-Zc:wchar_t-" option to compile and boost serialization library is compiled without this option -- */
#define _QX_SERIALIZE_WIDE_BINARY            (! _QX_SERIALIZE_POLYMORPHIC && 0)
#define _QX_SERIALIZE_WIDE_TEXT              (! _QX_SERIALIZE_POLYMORPHIC && 0)
#define _QX_SERIALIZE_WIDE_XML               (! _QX_SERIALIZE_POLYMORPHIC && 0)

#define _QX_USE_MEM_LEAK_DETECTION                                      0
#define _QX_USE_EXPORT_DLL_BOOST_SERIALIZATION_SINGLETON                1
#define _QX_USE_BOOST_SERIALIZE_REGISTER_HELPER                         0
#define _QX_USE_MODIFY_BOOST_SERIALIZATION_EXPORT_HPP                   0
#define _QX_USE_TRACE_CONSTRUCTOR_DESTRUCTOR                            0
#define _QX_WRITE_BOOST_CLASS_EXPORT_IN_HPP_FILE                        0
#define _QX_WRITE_BOOST_CLASS_EXPORT_IN_CPP_FILE                        1
#define _QX_INCLUDE_BOOST_SERIALIZE_EXPORT_HPP_INTO_QX_MEM_LEAK_HPP     1
#define _QX_INCLUDE_BOOST_SERIALIZE_ARCHIVE_IMPL_IPP                    0
#define _QX_MEM_LEAK_ONLY_KNOWN_SRC_FILE                                1
#define _QX_SUPPORT_BOOST_SERIALIZE_SHARED_PTR_132                      0

#ifdef _MSC_VER
/* -- Link error with VC++ 9.0 => Qt uses "-Zc:wchar_t-" option to compile and boost serialization library is compiled without this option -- */
#define _QX_USE_SERIALIZE_POLYMORPHIC_PATCH  (_QX_SERIALIZE_POLYMORPHIC && 1)
#else // _MSC_VER
#define _QX_USE_SERIALIZE_POLYMORPHIC_PATCH  0
#endif // _MSC_VER

#endif // _QX_CONFIG_H_
