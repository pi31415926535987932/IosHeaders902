/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:48 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPUISearchViewControllerPresentation <NSObject>
@property (assign,nonatomic) unsigned presentsFromEdge; 
@required
-(void)willBeginPresentingAnimated:(char)arg1 fromSource:(unsigned)arg2;
-(void)willBeginPresentingAnimated:(char)arg1;
-(void)updatePresentationProgress:(float)arg1;
-(void)didFinishPresenting:(char)arg1;
-(void)willBeginDismissing:(char)arg1;
-(unsigned)presentsFromEdge;
-(void)setPresentsFromEdge:(unsigned)arg1;

@end

