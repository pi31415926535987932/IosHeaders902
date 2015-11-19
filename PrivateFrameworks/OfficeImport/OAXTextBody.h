/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXTextBody : NSObject
+(unsigned char)readFlowType:(id)arg1 ;
+(unsigned char)readAnchorType:(id)arg1 ;
+(unsigned char)readHorizontalOverflowType:(id)arg1 ;
+(void)readTextBodyFromXmlNode:(xmlNode*)arg1 textBody:(id)arg2 drawingState:(id)arg3 ;
+(void)readTextBodyProperties:(xmlNode*)arg1 textBodyProperties:(id)arg2 drawingState:(id)arg3 ;
+(void)readFlowType:(id)arg1 textBodyProperties:(id)arg2 ;
+(void)readWrapType:(id)arg1 textBodyProperties:(id)arg2 ;
+(void)readVerticalOverflowType:(id)arg1 textBodyProperties:(id)arg2 ;
+(void)readHorizontalOverflowType:(id)arg1 textBodyProperties:(id)arg2 ;
+(id)stringWithTextBodyVerticalOverflowType:(unsigned char)arg1 ;
+(id)stringWithTextBodyHorizontalOverflowType:(unsigned char)arg1 ;
+(id)stringWithTextBodyFlowType:(unsigned char)arg1 ;
+(id)stringWithTextBodyWrapType:(unsigned char)arg1 ;
+(id)stringWithTextAnchorType:(unsigned char)arg1 ;
+(void)writeTextBodyAutoFit:(id)arg1 to:(id)arg2 ;
@end

