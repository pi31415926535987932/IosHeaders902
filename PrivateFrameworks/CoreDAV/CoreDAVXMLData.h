/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreDAV/CoreDAV-Structs.h>
@class NSData;

@interface CoreDAVXMLData : NSObject {

	char _shouldAddFormattingSpaces;
	xmlTextWriterRef _writer;
	xmlDoc* _doc;
	char _docHasEnded;
	CFDictionaryRef _seenURIsToPrefixes;
	CFDictionaryRef _seenURIsToDepth;
	CFArrayRef _elementStack;

}

@property (assign,nonatomic) char shouldAddFormattingSpaces;              //@synthesize shouldAddFormattingSpaces=_shouldAddFormattingSpaces - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(char)string:(id)arg1 isEqualToXmlCharString:(const char*)arg2 ;
-(void)dealloc;
-(id)init;
-(NSData *)data;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 ;
-(void)endElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3 ;
-(void)setShouldAddFormattingSpaces:(char)arg1 ;
-(const char*)_prefixForNameSpace:(const char*)arg1 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 ;
-(void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(void*)arg4 ;
-(char)shouldAddFormattingSpaces;
-(void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4 ;
@end

