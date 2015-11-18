/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBLockScreenActionContext.h>

@class NSString, BBBulletin;

@interface SBMutableLockScreenActionContext : SBLockScreenActionContext

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * lockLabel; 
@property (nonatomic,retain) NSString * shortLockLabel; 
@property (nonatomic,copy) id action; 
@property (assign,nonatomic) char requiresUIUnlock; 
@property (assign,nonatomic) char deactivateAwayController; 
@property (assign,nonatomic) char canBypassPinLock; 
@property (assign,nonatomic) char requiresAuthentication; 
@property (assign,nonatomic) BBBulletin * bulletin; 
@end

