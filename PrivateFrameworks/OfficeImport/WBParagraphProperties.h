/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBParagraphProperties : NSObject
+(void)readFrom:(id)arg1 wrdProperties:(WrdParagraphProperties*)arg2 tracked:(WrdParagraphProperties*)arg3 document:(id)arg4 properties:(id)arg5 ;
+(WrdParagraphProperties*)createTrackedPropertiesIfNeeded:(id)arg1 ;
+(id)formattingChangeDate:(const WrdDateTime*)arg1 ;
+(void)mapWordProperties:(WrdParagraphProperties*)arg1 reader:(id)arg2 toProperties:(id)arg3 ;
@end

