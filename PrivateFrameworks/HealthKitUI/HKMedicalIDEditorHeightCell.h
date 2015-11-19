/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKMedicalIDEditorCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView, NSLengthFormatter, NSNumber, NSString;

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _picker;
	NSLengthFormatter* _lengthFormatter;
	char _usesImperialUnits;
	NSNumber* _centimeterValue;

}

@property (nonatomic,retain) NSNumber * centimeterValue;              //@synthesize centimeterValue=_centimeterValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultCentimeterValue;
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)_commonInit;
-(void)beginEditing;
-(void)commitEditing;
-(id)formattedValue;
-(void)_showPicker;
-(void)_hidePicker;
-(id)_formattedValueForFeet:(double)arg1 ;
-(id)_formattedValueForInches:(double)arg1 ;
-(id)_formattedValueForCentimeters:(double)arg1 ;
-(void)setCentimeterValue:(NSNumber *)arg1 ;
-(NSNumber *)centimeterValue;
-(void)_localeDidChange:(id)arg1 ;
@end

