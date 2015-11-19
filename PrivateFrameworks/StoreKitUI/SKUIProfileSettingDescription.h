/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingDescription.h>

@class NSString, NSOperationQueue, UIImage;

@interface SKUIProfileSettingDescription : SKUISettingDescription {

	NSString* _handle;
	NSString* _name;
	NSOperationQueue* _operationQueue;
	UIImage* _photo;

}

@property (nonatomic,readonly) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * photo;                //@synthesize photo=_photo - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
-(NSString *)handle;
-(UIImage *)photo;
-(void)dealloc;
-(void)reloadData;
-(NSString *)name;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)_fetchAccountInfo;
-(void)_fetchProfilePhoto;
@end

