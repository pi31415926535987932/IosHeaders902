/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:51:38 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol WKRotatingPopoverDelegate;
@class WKContentView, UIPopoverController, NSString;

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {

	WKContentView* _view;
	char _isRotating;
	CGPoint _presentationPoint;
	RetainPtr<UIPopoverController>* _popoverController;
	id<WKRotatingPopoverDelegate> _dismissionDelegate;

}

@property (assign,nonatomic) CGPoint presentationPoint;                                     //@synthesize presentationPoint=_presentationPoint - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController; 
@property (assign,nonatomic) id<WKRotatingPopoverDelegate> dismissionDelegate;              //@synthesize dismissionDelegate=_dismissionDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)dismissPopoverAnimated:(char)arg1 ;
-(id)initWithView:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)presentPopoverAnimated:(char)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(UIPopoverController *)popoverController;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(unsigned)popoverArrowDirections;
-(CGPoint)presentationPoint;
-(void)setDismissionDelegate:(id<WKRotatingPopoverDelegate>)arg1 ;
-(id<WKRotatingPopoverDelegate>)dismissionDelegate;
@end

