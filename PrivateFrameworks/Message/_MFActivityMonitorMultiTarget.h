/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:12 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {

	id _primaryTarget;
	NSMutableSet* _allTargets;

}
-(void)dealloc;
-(id)allTargets;
-(id)displayName;
-(char)addActivityTarget:(id)arg1 ;
-(char)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
@end

