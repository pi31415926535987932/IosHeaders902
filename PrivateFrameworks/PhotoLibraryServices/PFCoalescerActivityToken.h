/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface PFCoalescerActivityToken : NSObject {

	NSObject*<OS_dispatch_group> _group;

}

@property (retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
-(void)dealloc;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(void)endActivity;
-(id)initWithDispatchGroup:(id)arg1 ;
@end

