/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AKJiggling.h>

@class AKCodeEntryView, AKBasicLoginContentViewController, NSArray, NSString;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <AKJiggling> {

	AKCodeEntryView* _codeGeneratorView;
	AKBasicLoginContentViewController* _titleHeaderViewController;
	NSArray* _activeConstraints;

}

@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,readonly) NSString * generatedCode; 
@property (nonatomic,retain) AKCodeEntryView * codeGeneratorView;                                        //@synthesize codeGeneratorView=_codeGeneratorView - In the implementation block
@property (nonatomic,retain) AKBasicLoginContentViewController * titleHeaderViewController;              //@synthesize titleHeaderViewController=_titleHeaderViewController - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                                                //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReason:(NSString *)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)updateViewConstraints;
-(NSString *)reason;
-(NSString *)generatedCode;
-(void)_configureTitleHeaderView;
-(void)_configureCodeGenView;
-(void)_updateFontContstraints:(id)arg1 ;
-(void)jiggleAView;
-(AKCodeEntryView *)codeGeneratorView;
-(void)setCodeGeneratorView:(AKCodeEntryView *)arg1 ;
-(AKBasicLoginContentViewController *)titleHeaderViewController;
-(void)setTitleHeaderViewController:(AKBasicLoginContentViewController *)arg1 ;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(NSArray *)activeConstraints;
@end

