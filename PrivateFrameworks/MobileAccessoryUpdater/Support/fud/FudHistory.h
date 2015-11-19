/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:15 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Support/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary;

@interface FudHistory : NSObject <NSCoding> {

	NSString* filterName;
	NSMutableDictionary* history;

}
-(void)recordSuccessfulRemoteFindForRevision:(id)arg1 date:(id)arg2 ;
-(char)policyAllowsRemoteFindNow:(id)arg1 revision:(id)arg2 ;
-(id)getHistoryKeyForRevision:(id)arg1 ;
-(char)policyAllowsRemoteFind:(id)arg1 revision:(id)arg2 date:(id)arg3 ;
-(id)initWithFilterName:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

