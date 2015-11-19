/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/HKEmergencyCardTableItem.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellEditDelegate.h>
#import <libobjc.A.dylib/HKMedicalIDEditorCellHeightChangeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@protocol HKEmergencyCardRowHeightChangeDelegate;
@class HKMedicalIDEditorNameAndPhotoCell, NSString;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	HKMedicalIDEditorNameAndPhotoCell* _cell;
	id<HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;              //@synthesize rowHeightChangeDelegate=_rowHeightChangeDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initInEditMode:(char)arg1 ;
-(id)title;
-(void)setData:(id)arg1 ;
-(id)_cell;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)commitEditing;
-(id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2 ;
-(void)setRowHeightChangeDelegate:(id<HKEmergencyCardRowHeightChangeDelegate>)arg1 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg1 ;
-(void)_editPhotoTapped:(id)arg1 ;
-(id<HKEmergencyCardRowHeightChangeDelegate>)rowHeightChangeDelegate;
-(void)medicalIDEditorCell:(id)arg1 didChangeHeight:(float)arg2 keepRectVisible:(CGRect)arg3 inView:(id)arg4 ;
@end

