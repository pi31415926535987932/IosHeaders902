/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPredicateDelegate.h>

@class NSString;

@interface BBNotificationBehaviorFavoritesListDelegate : NSObject <ABPredicateDelegate> {

	/*^block*/id _handlerBlock;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)predicateShouldContinue:(id)arg1 ;
-(char)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(void)dealloc;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
@end

