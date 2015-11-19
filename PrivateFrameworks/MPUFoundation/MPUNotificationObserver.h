/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPUNotificationObserver : NSObject {

	id _notificationObservationToken;

}

@property (nonatomic,retain) id notificationObservationToken;              //@synthesize notificationObservationToken=_notificationObservationToken - In the implementation block
+(id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)notificationObservationToken;
-(void)setNotificationObservationToken:(id)arg1 ;
@end

