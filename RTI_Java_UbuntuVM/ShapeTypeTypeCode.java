
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from .idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

import com.rti.dds.typecode.*;

public class  ShapeTypeTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int __i=0;
        StructMember sm[]=new StructMember[4];

        sm[__i]=new  StructMember("color", false, (short)-1, true,(TypeCode) new TypeCode(TCKind.TK_STRING,128),0 , false);__i++;
        sm[__i]=new  StructMember("x", false, (short)-1,  false,(TypeCode) TypeCode.TC_LONG,1 , false);__i++;
        sm[__i]=new  StructMember("y", false, (short)-1,  false,(TypeCode) TypeCode.TC_LONG,2 , false);__i++;
        sm[__i]=new  StructMember("shapesize", false, (short)-1,  false,(TypeCode) TypeCode.TC_LONG,3 , false);__i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("ShapeType",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,  sm);        
        return tc;
    }
}

