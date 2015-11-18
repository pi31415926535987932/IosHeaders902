/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:34:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface LSInstallProgressList : NSObject {

	NSMutableDictionary* _progresses;
	NSMutableDictionary* _subscriptions;

}
-(id)progressForBundleID:(id)arg1 ;
-(id)subscriberForBundleID:(id)arg1 andPublishingKey:(id)arg2 ;
-(void)setProgress:(id)arg1 forBundleID:(id)arg2 ;
-(void)addSubscriber:(id)arg1 forPublishingKey:(id)arg2 andBundleID:(id)arg3 ;
-(void)removeProgressForBundleID:(id)arg1 ;
-(void)removeSubscriberForPublishingKey:(id)arg1 andBundleID:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end

