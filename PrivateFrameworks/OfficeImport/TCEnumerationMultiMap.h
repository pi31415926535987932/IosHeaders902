/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCEnumerationMultiMap : NSObject {

	CFDictionaryRef m_valueToString;
	CFDictionaryRef m_stringToValue;
	char m_caseSensitive;

}
-(void)dealloc;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 caseSensitive:(char)arg3 ;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 ;
-(long)valueForString:(id)arg1 ;
-(id)stringForValue:(int)arg1 ;
@end

