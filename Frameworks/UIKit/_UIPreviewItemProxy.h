/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString;

@interface _UIPreviewItemProxy : NSObject {

	NSURL* _URL;
	NSURL* _previewURLOverride;
	NSString* _name;
	NSURL* _URLsToDeleteOnDealloc;
	NSString* _previewItemContentType;
	NSURL* _URLToDeleteOnDealloc;

}

@property (nonatomic,copy) NSURL * previewItemURL;                         //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL * previewItemURLOverride;                 //@synthesize previewURLOverride=_previewURLOverride - In the implementation block
@property (nonatomic,copy) NSString * previewItemTitle;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSURL * URLToDeleteOnDealloc;                   //@synthesize URLToDeleteOnDealloc=_URLToDeleteOnDealloc - In the implementation block
@property (nonatomic,copy) NSString * previewItemContentType; 
-(void)dealloc;
-(NSURL *)previewItemURL;
-(NSURL *)previewItemURLOverride;
-(void)setPreviewItemContentType:(NSString *)arg1 ;
-(NSString *)previewItemContentType;
-(id)_primitive_previewItemContentType;
-(id)previewItemURLForDisplay;
-(void)setPreviewItemURL:(NSURL *)arg1 ;
-(void)setPreviewItemURLOverride:(NSURL *)arg1 ;
-(NSString *)previewItemTitle;
-(void)setPreviewItemTitle:(NSString *)arg1 ;
-(NSURL *)URLToDeleteOnDealloc;
-(void)setURLToDeleteOnDealloc:(NSURL *)arg1 ;
@end
