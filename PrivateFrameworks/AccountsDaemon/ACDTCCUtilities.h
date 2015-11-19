/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@interface ACDTCCUtilities : NSObject
+(CFStringRef)_TCCServiceForAccountTypeID:(id)arg1 ;
+(int)TCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(char)TCCSupportedForAccountTypeID:(id)arg1 ;
+(char)setTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 toGranted:(char)arg3 ;
+(char)clearTCCStateForClient:(id)arg1 accountTypeID:(id)arg2 ;
+(id)allTCCStatesForAccountTypeID:(id)arg1 ;
+(char)clearAllTCCStatesForAccountTypeID:(id)arg1 ;
@end

