/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBDocument : NSObject
+(void)setTimeStamp:(WrdDocumentProperties*)arg1 ;
+(id)readFrom:(id)arg1 ;
+(void)readProperties:(id)arg1 document:(id)arg2 ;
+(void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3 ;
+(void)readSectionsFrom:(id)arg1 document:(id)arg2 ;
+(void)readTextBoxesFrom:(id)arg1 ;
+(void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3 ;
-(id)init;
-(id)applicationName;
@end

