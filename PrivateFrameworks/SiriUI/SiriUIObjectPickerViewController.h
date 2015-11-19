/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SiriUIObjectPickerViewControllerDelegate;
@class SAUIDomainObjectPicker;

@interface SiriUIObjectPickerViewController : UIViewController {

	id<SiriUIObjectPickerViewControllerDelegate> _pickerDelegate;
	SAUIDomainObjectPicker* _picker;

}

@property (assign,nonatomic,__weak) id<SiriUIObjectPickerViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (getter=_picker,nonatomic,readonly) SAUIDomainObjectPicker * picker;                                //@synthesize picker=_picker - In the implementation block
+(id)pickerControllerWithPicker:(id)arg1 ;
-(id<SiriUIObjectPickerViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<SiriUIObjectPickerViewControllerDelegate>)arg1 ;
-(void)showPicker:(id)arg1 ;
-(id)_picker;
-(id)initWithPicker:(id)arg1 ;
@end

