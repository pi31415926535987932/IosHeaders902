/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLRevGeoCompoundNameInfo, NSArray;

@interface PLMomentNameInfo : NSObject {

	char _locationInfoIsValid;
	PLRevGeoCompoundNameInfo* __primaryNameInfo;
	PLRevGeoCompoundNameInfo* __secondaryNameInfo;
	NSArray* __orderedNames;

}

@property (nonatomic,retain) PLRevGeoCompoundNameInfo * _primaryNameInfo;                   //@synthesize _primaryNameInfo=__primaryNameInfo - In the implementation block
@property (nonatomic,retain) PLRevGeoCompoundNameInfo * _secondaryNameInfo;                 //@synthesize _secondaryNameInfo=__secondaryNameInfo - In the implementation block
@property (setter=_setOrderedNames:,nonatomic,retain) NSArray * _orderedNames;              //@synthesize _orderedNames=__orderedNames - In the implementation block
+(id)_localizedNameForName:(id)arg1 ;
-(void)dealloc;
-(void)_setOrderedNames:(id)arg1 ;
-(id)componentsForPrimaryTitle;
-(id)initWithMoment:(id)arg1 ;
-(id)initWithMomentList:(id)arg1 ;
-(char)locationInfoIsValid;
-(id)localizedPrimaryTitle;
-(id)componentsForSecondaryTitle;
-(PLRevGeoCompoundNameInfo *)_primaryNameInfo;
-(void)set_primaryNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(PLRevGeoCompoundNameInfo *)_secondaryNameInfo;
-(void)set_secondaryNameInfo:(PLRevGeoCompoundNameInfo *)arg1 ;
-(NSArray *)_orderedNames;
@end

