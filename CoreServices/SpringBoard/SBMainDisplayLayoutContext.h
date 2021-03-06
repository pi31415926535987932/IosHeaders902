/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBMainDisplayLayoutContext <SBLayoutContext>
@property (nonatomic,readonly) int sideAppPresentationStyle; 
@property (nonatomic,readonly) int sideAppWidth; 
@property (nonatomic,readonly) int externallyManagedSideAppPresentationStyle; 
@property (nonatomic,readonly) int externallyManagedSideAppWidth; 
@required
-(int)wallpaperMode;
-(int)sideAppPresentationStyle;
-(int)wallpaperModeForLayoutRole:(int)arg1;
-(char)includesStatusBarForLayoutRole:(int)arg1;
-(int)sideAppWidth;
-(int)externallyManagedSideAppPresentationStyle;
-(int)externallyManagedSideAppWidth;

@end

