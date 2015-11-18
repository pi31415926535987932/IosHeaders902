/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributedString, NSURL, UIImage, NSString;

@interface MKMapAttribution : NSObject {

	NSAttributedString* _string;
	NSURL* _url;
	UIImage* _providerImage;
	NSString* _providerString;
	NSString* _providerName;

}

@property (nonatomic,readonly) NSString * providerString;                         //@synthesize providerString=_providerString - In the implementation block
@property (nonatomic,readonly) UIImage * providerImage;                           //@synthesize providerImage=_providerImage - In the implementation block
@property (nonatomic,readonly) NSString * providerName;                           //@synthesize providerName=_providerName - In the implementation block
@property (nonatomic,readonly) NSAttributedString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSAttributedString * disclosureArrow; 
-(NSAttributedString *)disclosureArrow;
-(UIImage *)providerImage;
-(NSString *)providerString;
-(id)attributedStringWithImage:(id)arg1 ;
-(id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3 scale:(float)arg4 ;
-(NSURL *)url;
-(NSAttributedString *)string;
-(NSString *)providerName;
@end
