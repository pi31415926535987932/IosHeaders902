/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@class FBDisplayLayoutTransition, SBStarkScreenController, SBAlertManager, NSString;

@interface SBStarkWorkspaceTransaction : SBWorkspaceTransaction <SBAlertManagerObserver> {

	FBDisplayLayoutTransition* _rootLayoutTransition;
	SBStarkScreenController* _starkScreenController;
	SBAlertManager* _starkScreenAlertManager;

}

@property (nonatomic,retain,readonly) SBStarkScreenController * starkScreenController;              //@synthesize starkScreenController=_starkScreenController - In the implementation block
@property (nonatomic,retain,readonly) SBAlertManager * starkScreenAlertManager;                     //@synthesize starkScreenAlertManager=_starkScreenAlertManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(SBStarkScreenController *)starkScreenController;
-(SBAlertManager *)starkScreenAlertManager;
-(void)dealloc;
-(void)_willBegin;
-(void)_didComplete;
@end
