//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MPAssetManager.h>

@class ILMediaManager, NSLock, NSMutableDictionary, NSString;

@interface MPDesktopAssetManager : MPAssetManager
{
    NSMutableDictionary *mAssets;
    NSMutableDictionary *mCachedData;
    NSLock *mAssetsWriteAccessLock;
    ILMediaManager *mApertureMediaManager;
    ILMediaManager *miPhotoMediaManager;
    ILMediaManager *miMovieMediaManager;
    ILMediaManager *miTunesMediaManager;
    ILMediaManager *mFolderMediaManager;
    NSString *mAssetCachePath;
    BOOL mCacheSaveIsScheduled;
    BOOL mRescheduleSavingCache;
    BOOL mSavesCacheToDisk;
    BOOL mAssetLogging;
}

- (id)absolutePathFromPath:(id)arg1;
- (double)posterTimeForAssetAtPath:(id)arg1;
- (BOOL)isAssetAtPathASupportedAudio:(id)arg1;
- (BOOL)isAssetAtPathASupportedMovie:(id)arg1;
- (BOOL)isAssetAtPathASupportedImage:(id)arg1;
- (unsigned long long)cachedMediaType:(id)arg1;
- (BOOL)isAssetPathUseable:(id)arg1;
- (id)locationHierarchyForAssetAtPath:(id)arg1;
- (id)altitudeForAssetAtPath:(id)arg1;
- (id)longitudeForAssetAtPath:(id)arg1;
- (id)latitudeForAssetAtPath:(id)arg1;
- (id)keywordsForAssetAtPath:(id)arg1;
- (id)creationDateForAssetAtPath:(id)arg1;
- (struct CGSize)resolutionForAssetAtPath:(id)arg1;
- (double)stopTimeForAssetAtPath:(id)arg1;
- (double)startTimeForAssetAtPath:(id)arg1;
- (double)durationForAssetAtPath:(id)arg1;
- (id)thumbnailForAssetAtPath:(id)arg1;
- (void)gatherMetadataForAssetAtPath:(id)arg1;
- (id)_folderMediaManager;
- (id)_iTunesMediaManager;
- (id)_iMovieMediaManager;
- (id)_iPhotoMediaManager;
- (id)_apertureMediaManager;
- (void)saveCache;
- (void)setSavesToDisk:(BOOL)arg1;
- (void)dealloc;
- (BOOL)quitting:(id)arg1;
- (id)init;
- (id)prepareInfoForAssetsAtPaths:(id)arg1;
- (void)removeRegionOfInterestAtIndex:(long long)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)setForceOrderForRegionsOfInterest:(BOOL)arg1 forPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)moveRegionOfInterestWithPath:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 saveToCache:(BOOL)arg4;
- (void)updateRegionOfInterestAtIndex:(long long)arg1 atPath:(id)arg2 to:(struct CGRect)arg3 saveToCache:(BOOL)arg4;
- (void)updateROIInfoAtIndex:(long long)arg1 atPath:(id)arg2 to:(id)arg3 saveToCache:(BOOL)arg4;
- (void)setRegionOfInterest:(struct CGRect)arg1 atIndex:(long long)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4;
- (void)setROIInfo:(id)arg1 atIndex:(long long)arg2 forAssetAtPath:(id)arg3 saveToCache:(BOOL)arg4;
- (void)addRegionOfInterest:(struct CGRect)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (void)addROIInfo:(id)arg1 forAssetAtPath:(id)arg2 saveToCache:(BOOL)arg3;
- (struct CGRect)regionOfInterestAtIndex:(long long)arg1 forAssetAtPath:(id)arg2;
- (id)roiInfoAtIndex:(long long)arg1 forAssetAtPath:(id)arg2;
- (void)tryToSaveCache;
- (id)mediaObjectForAssetAtPath:(id)arg1;
- (void)cacheAttributes:(id)arg1 forPath:(id)arg2;
- (id)createLocationHierarchyFromPlacesAttributeArray:(id)arg1;
- (void)drawFaceRectsToCache;
- (id)gatherAssetInformationFromSystemForPath:(id)arg1;
- (BOOL)tryToCachePath:(id)arg1;
- (void)gatherAssetInformationForMediaObject:(id)arg1;
- (id)findMediaObjectWithPathInILMB:(id)arg1;
- (CDUnknownBlockType)blockTestForPath:(id)arg1;
- (void)findMediaObjectInILMB:(id *)arg1 andSource:(id)arg2 forMediaObjectID:(id)arg3;
- (struct CGSize)resolutionFromEXIFForPath:(id)arg1;
- (id)contentCreationDateForImageAtPath:(id)arg1;
- (id)exifPropertiesForImageAtPath:(id)arg1;
- (void)writeCacheNow;
- (void)cacheMediaObject:(id)arg1 withPath:(id)arg2 andMediaSource:(id)arg3;
- (id)attributesForAssetAtPath:(id)arg1;

@end

