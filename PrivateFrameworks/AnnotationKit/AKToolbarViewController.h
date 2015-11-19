/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController {

	AKController* _controller;

}

@property (__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
+(id)imageForToolbarButtonItemOfType:(unsigned)arg1 ;
+(id)_imageNameForToolbarButtonItemOfType:(unsigned)arg1 ;
+(id)titleForToolbarButtonItemOfType:(unsigned)arg1 ;
+(id)alternateImageForToolbarButtonItemOfType:(unsigned)arg1 ;
+(int)buttonTypeForToolbarButtonItemOfType:(unsigned)arg1 ;
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(void)revalidateItems;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned)arg1 ;
-(void)teardown;
@end

