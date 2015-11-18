/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAwayListCellButtonHandler.h>
#import <libobjc.A.dylib/SBUIQuietModePlayability.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, SBLockScreenActionContext, NSString;

@interface SBAwayListItem : NSObject <SBAwayListCellButtonHandler, SBUIQuietModePlayability, NSCopying> {

	NSDate* _timestamp;
	char _isNewItem;
	SBLockScreenActionContext* _lockScreenActionContext;
	NSString* _buttonLabel;

}

@property (nonatomic,copy) NSString * buttonLabel;                          //@synthesize buttonLabel=_buttonLabel - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char isNewItem;                                //@synthesize isNewItem=_isNewItem - In the implementation block
@property (nonatomic,readonly) char shouldPlayLightsAndSirens; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(char)wantsHighlightOnInsert;
-(char)canBeRemovedByNotificationCenterPresentation;
-(char)canBeRemovedByUnlock;
-(char)isNewItem;
-(void)setIsNewItem:(char)arg1 ;
-(void)dealloc;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)shouldPlayLightsAndSirens;
-(char)inertWhenLocked;
-(void)buttonPressed;
-(void)setButtonLabel:(NSString *)arg1 ;
-(NSString *)buttonLabel;
-(char)isCritical;
-(char)overridesQuietMode;
-(char)overridesPocketMode;
@end

