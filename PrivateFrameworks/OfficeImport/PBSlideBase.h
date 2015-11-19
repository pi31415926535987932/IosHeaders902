/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBSlideBase : NSObject
+(void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3 ;
+(void)readComments:(id)arg1 slide:(id)arg2 state:(id)arg3 ;
+(unsigned)authorIdForName:(id)arg1 state:(id)arg2 ;
+(char)slideFollowsMasterBackground:(id)arg1 ;
+(void)parseSlideShowInfo:(PptSSSlideInfoAtom*)arg1 slideBase:(id)arg2 state:(id)arg3 ;
+(id)nonPlaceholderDrawablesAmongDrawables:(id)arg1 ;
+(int)parseTransType:(int)arg1 direction:(long)arg2 ;
+(id)newOptions:(long)arg1 transType:(int)arg2 ;
+(unsigned char)mapDirection:(id)arg1 ;
+(void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3 ;
+(char)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4 ;
@end

