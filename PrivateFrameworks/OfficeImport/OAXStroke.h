/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXStroke : NSObject
+(id)readStrokeFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(id)lineCapEnumMap;
+(id)compoundLineEnumMap;
+(id)penAlignmentEnumMap;
+(id)readPresetDashFromXmlNode:(xmlNode*)arg1 ;
+(id)readCustomDashFromXmlNode:(xmlNode*)arg1 drawingState:(id)arg2 ;
+(id)readLineEndFromXmlNode:(xmlNode*)arg1 ;
+(id)lineEndTypeEnumMap;
+(id)lineEndWidthEnumMap;
+(id)lineEndLengthEnumMap;
+(id)presetDashEnumMap;
@end

